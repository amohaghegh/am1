#!/usr/bin/env python
# coding: utf-8

# In[1]:


import random


# In[12]:


# def random_number(max_int): 
#     rand = random.randrange(0,max_int)
#     return rand

# a_number = random_number(100)
# print(a_number)


# In[24]:


print("Picking a number between 1-100")


# ### print(random.randint(1,100))

# 

# In[1]:


# 


# In[19]:


import random

def random_number():
    max_int = 100
    rand = random.randrange(0, max_int)
    return rand
a_number = random_number()
print(a_number)
while True:
    number=True
    guess = input("Guess the number! 1-100 ")
    try:
        int(guess)
    except ValueError:
            try:
                float(guess)
            except ValueError:
                print("This is not a number")
                number=False
    if number:
        guess=int(guess)
            
        if guess == a_number:
            print("You guessed correctly!")
            break
    
        if guess > 100:
            print ("That is not 1-100!")
                        
        if guess < a_number:                 
            print("Your number is less than the actual number! Guess higher!")
          
        if guess > a_number:
            print("Your number is higher than the actual number! Guess lower!")

        if guess < 1:
            print("Your number is not 1-100")
        



# In[ ]:





# In[ ]:





# In[ ]:





# In[ ]:





# In[ ]:




