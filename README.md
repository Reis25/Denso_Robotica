**Resumo:**

O presente trabalho consiste em um sistema Pick and Place executado pelo braço robótico Quanser VP6242 acoplado com um “Gripper” 85. O sistema será executado utilizando Matlab e integrado pelo Ros.  A tarefa executada é buscar um objeto numa posição dada pela câmera e por em uma posição fornecida pelo usuário. 
O sistema de localização constitui-se de uma câmera instalada em frente ao manipulador robótico que encontra-se sobre uma mesa e a colocação de marcadores em posições estratégicas para descrever o sistema em tempo real.

**Funçes**

Os arquivos do projeto estão dentro da pasta rvctools. Os arquivos ArmTraj são livescripts para rodar no Matlab2017 ou mais nova, eles demontram todo o projeto em scripts. Dentro de rvctools o arquivo para o projeto é o test.m

Importante: Configurar o ROS como está descrito no doc. Caso só deseje simular com plots, comentar a parte de recebimento dos parâmetros pelo subscriber do ROS e anotar as variáveis utilizando a função teach() da toolbox.

**Requisitos para reprodução:**

* Matlab R2014a;
* Matlab ToolBox PeterCorker (Release 9); 
* ROS melodic para Linux Ubuntu versão LTS 18.04;  
* aRuco (ou identificadores similares); 
* Rvitz;
		
**Projeto (step by step):**

Modelagem matemática;
* Desenvolvimento da trajetória ( cinemática direta e inversa);
* Visão computacional
* Integração;
* Simulação;
* Testes;



**Referências.**

CRAIG, J.J., Introduction to Robotics - Mechanics & Control. Mass: Addison-Wesley, 2012.

FU, K.S. et alii, Robotics: Control, Sensing, Vision and Intelligence. New York: McGraw-Hill, 1987.

ROS Geometry 
https://github.com/ros/geometry

Busca de trajetória 
http://wiki.ros.org/joint_trajectory_controller

Tópicos no ROS
http://wiki.ros.org/joint_state_publisher
