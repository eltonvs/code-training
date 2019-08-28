/*
Enter your query here.
*/

select
case
    when A + B <= C then "Not A Triangle"
    when C + B <= A then "Not A Triangle"
    when A + C <= B then "Not A Triangle"
    when A = B then if(A = C, "Equilateral", "Isosceles")
    when B = C then "Isosceles"
    when A = C then "Isosceles"
    else "Scalene"
end
from TRIANGLES
