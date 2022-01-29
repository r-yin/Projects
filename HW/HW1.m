%plotting time vs altitude
%data set 1

trial1 = importdata('Trial1.mat');
trial2 = importdata('Trial2.mat');
% load Trial1.mat;

numberOfTime = height(trial1);
time = [1:numberOfTime];
altitude = trial1.altitude(1:33);

figure(1)
plot(time, altitude)
title('Measuring of Time V.S. Altitude Data Set1');
xlabel('Time(s)'), ylabel('Altitude');


hold on

numberOfTime2 = height(trial2);
time2 = [1:numberOfTime2];
altitude2 = trial2.altitude(1:41);

plot(time2, altitude2)

legend('Trial1', 'Trial2');
