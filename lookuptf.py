#!/usr/bin/env python

import rospy
import tf
from geometry_msgs.msg import Transform






if __name__ == '__main__':
    rospy.init_node('baselink_tf')
    listener = tf.TransformListener()

    liste = rospy.Publisher('transfor_baselink',Transform,queue_size=1)

    rate = rospy.Rate(10.0)
    msg = Transform()

    while not rospy.is_shutdown():
        try:
            (trans,rot) = listener.lookupTransform('/ar_marker_6', '/camera', rospy.Time(0))
            
        except (tf.LookupException, tf.ConnectivityException, tf.ExtrapolationException):
            continue

        msg.translation = trans
        msg.rotation = rot
        print(trans)
        rospy.loginfo('I heard translation %s',msg.translation)
        rospy.loginfo('I heard rotation %s',msg.rotation)
        liste.publish(msg)
        rate.sleep()

