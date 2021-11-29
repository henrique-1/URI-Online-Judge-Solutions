(def x (read-string (read-line)))
(def y (read-string (read-line)))
(def media (/ (+ (* 3.5 x) (* 7.5 y)) 11.0))

(printf "MEDIA = %.5f\n" media)