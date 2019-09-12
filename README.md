Resumo:
	O presente trabalho consiste em um sistema Pick and Place executado pelo braço robótico Quanser VP6242 acoplado com um “Gripper” 85. O sistema será executado utilizando Matlab e integrado pelo Ros.  A tarefa executada é buscar um objeto numa posição dada pela câmera e por em uma posição fornecida pelo usuário. 
	A configuração do esquema é da forma: 

Requisitos para reprodução: 

Matlab R2014a;
Matlab ToolBox PeterCorker (Release 9); 
ROS melodic para Linux Ubuntu versão LTS 18.04;  
aRuco (ou identificadores similares); 
Rvitz;
		
Projeto (step by step): 

Modelagem matemática;
Desenvolvimento da trajetória ( cinemática direta e inversa);
Visão computacional
Integração;
Simulação;
Testes;

Visão computacional:
	
	A visão computacional manda as coordenadas do objeto identificado pelo seu código, nisso a função retorna com alta precisão a posição do cubo. Para implementar essa funcionalidade fazemos: 

Install python 3:

sudo apt install python3-pip

Install numpy: 

sudo apt install python-numpy

	No terminal do ROS instala os seguintes pacotes: 

Roswtf plugin (tf): 

roswtf
To install the fiducial software from binary packages:
sudo apt-get install ros-kinetic-fiducials
Fiducial markers can be generated with a command like this:
rosrun aruco_detect create_markers.py 100 112 fiducials.pdf
ar_track_alvar Installation
 sudo apt-get install ros-indigo-ar-track-alvar
Generating AR tags ar_track_alvar 

rosrun ar_track_alvar createMarker

Utilizando o ROS e executando os steps para receber os dados: [Inserir passos] 

There are launch files for both of these nodes:
roslaunch aruco_detect aruco_detect.launch

roslaunch fiducial_slam fiducial_slam.launch
A launch file is also provided to visualize the map in rviz.
roslaunch fiducial_slam fiducial_rviz.launch
Executa os seguintes scripts para detecção de posição do Cubo: 
Pegar o cubo: 
https://github.com/Reis25/rob/blob/master/poseCube2.py
e Pegar as coordenadas e printar:
https://github.com/Reis25/rob/blob/master/lookuptf.py

Referências.
CRAIG, J.J., Introduction to Robotics - Mechanics & Control. Mass: Addison-Wesley, 2012.

 FU, K.S. et alii, Robotics: Control, Sensing, Vision and Intelligence. New York: McGraw-Hill, 1987.

ROS Geometry 
https://github.com/ros/geometry

Busca de trajetória 
http://wiki.ros.org/joint_trajectory_controller

Tópicos no ROS
http://wiki.ros.org/joint_state_publisher
