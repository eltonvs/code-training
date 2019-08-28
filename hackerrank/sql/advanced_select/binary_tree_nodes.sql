/*
Enter your query here.
*/
(SELECT N, "Root" from bst where P is null)
union all
(SELECT a.N, "Leaf" from bst as a where not exists (SELECT b.N from bst as b where a.N = b.P))
union all
(SELECT a.N, "Inner" from bst as a where  exists (SELECT b.N from bst as b where a.N = b.P and a.P is not null))
order by N
