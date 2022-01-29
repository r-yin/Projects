load f21points.dat
newvec = fliplr(f21points)
x=[1:5]
plot(x,newvec,'k*')
xlabel('x')
ylabel('y')
title('Reversed points')
axis padded