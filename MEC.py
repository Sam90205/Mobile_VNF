import numpy as np
import matplotlib.pyplot as plt 
import random
# ==========================================
# 圓的基本資訊
# 1.圓半徑
MEC_r = 200
Network_r = 1500

# 2.座標落點
MEC_c_x=[]
MEC_c_y=[]

for i in range(0,1000):
    MEC_c_x.append(random.randint(-1000,1000))
    MEC_c_y.append(random.randint(-1000,1000))
print (len(MEC_c_x))
#===========================================
# 3.畫圖：
theta = np.arange(0,2*np.pi,0.01)
MEC_x=[]
MEC_y=[]
for i in range (0,len(MEC_c_x)) :
    MEC_x.append(MEC_c_x[i] - MEC_r * np.cos(theta))
    MEC_y.append(MEC_c_y[i] - MEC_r * np.sin(theta))

fig = plt.figure()
axes = fig.add_subplot(111)
Network_x = (0-Network_r * np.cos(theta))
Network_y = (0-Network_r * np.sin(theta))

axes.plot(Network_x , Network_y)
for i in range (0,len(MEC_c_x)):
    axes.plot(MEC_x[i],MEC_y[i])

axes.axis('equal')
plt.title('www.jb51.net')
plt.savefig('MECserver.jpg')
