# 4-digit LED Segment Display (nr. 2)
Ég tók það sem ég gerði í "nakvaemt_copy" möppunni en breytti void loopunni. </br> </br>
Í staðinn fyrir þetta: </br>
 Display(1, 1); </br>
 Display(2, 2); </br>
 Display(3, 3); </br>
 Display(4, 4); </br> </br>
 ... gerði ég þetta: </br>
 timi = timi + 1; </br>
 if (timi < 500){ </br>
 Display(1, 0); </br>
 Display(2, 0); </br>
 Display(3, 0); </br>
 } </br>
 if (timi > 500 and timi < 1000){ </br>
 Display(1, 1); </br>
 Display(2, 0); </br>
 Display(3, 0);  </br>
  } </br>
 if (timi > 1000 and timi < 1500){ </br>
 Display(1, 2); </br>
 Display(2, 0); </br>
 Display(3, 0); </br>
 } </br>
 if (timi > 1500 and timi < 2000){ </br>
 Display(1, 3); </br>
 Display(2, 0); </br>
 Display(3, 0); </br>
 } </br>
  if (timi > 2000 and timi < 2500){ </br>
 Display(1, 4); </br>
 Display(2, 0); </br>
 Display(3, 0); </br>
 } </br>
  if (timi > 2500 and timi < 3000){ </br>
 Display(1, 5); </br>
 Display(2, 0); </br>
 Display(3, 0); </br>
 } </br>
  if (timi > 3000 and timi < 3500){ </br>
 Display(1, 6); </br>
 Display(2, 0); </br>
 Display(3, 0); </br>
 } </br>
  if (timi > 3500 and timi < 4000){ </br>
 Display(1, 7); </br>
 Display(2, 0); </br>
 Display(3, 0); </br>
 } </br>
  if (timi > 4000 and timi < 4500){ </br>
 Display(1, 8); </br>
 Display(2, 0); </br>
 Display(3, 0); </br>
 } </br>
  if (timi > 4500 and timi < 5000){ </br>
 Display(1, 9); </br>
 Display(2, 0); </br>
 Display(3, 0); </br>
 } </br>
  if (timi > 5000 and timi < 5500){ </br>
 Display(1, 0); </br>
 Display(2, 1); </br>
 Display(3, 0); </br>
 } </br>
  if (timi > 5500){ </br>
 Display(1, 4); </br> 
 Display(2, 0); </br>
 Display(3, 4); </br>
 } </br> </br>
 

 Hér er myndband:




https://user-images.githubusercontent.com/100709468/168489671-dd10e045-70c6-4753-9349-5b1e4f7c67a0.mov


 

