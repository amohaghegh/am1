#!/usr/bin/env python
# coding: utf-8

# In[1]:


import random


# In[87]:


def random_number(max_int): 
    rand = random.randrange(0,max_int)
    return rand

a_number = random_number(5)
print(a_number)


# In[94]:


import random

health = 10



hurt = True

if hurt:
    health -= roll_the_dice
elif not hurt:
    health += roll_the_dice

print("Health is " + str(health))

def hit_the_player():
    global health
    roll_the_dice = random.randrange(1, 7)


# In[90]:





# In[ ]:




