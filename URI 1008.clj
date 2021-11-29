(def funcionarioID (read-string (read-line)))
(def horas (read-string (read-line)))
(def valorHoraExtra (read-string (read-line)))
(def salario (* horas valorHoraExtra))

(printf "NUMBER = %d\n" funcionarioID)
(printf "SALARY = U$ %.2f\n" salario)