(def x (read-string (read-line)))
(def y (read-string (read-line)))
(def z (read-string (read-line)))
(def media (/ (+ (* x 2) (* y 3) (* z 5)) 10))

(printf "MEDIA = %.1f\n" media)