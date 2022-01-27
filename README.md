Please compose the application (kind of 'sea battle' game)



You have a file
10 rows and 10 columns filled with '1' and '0'
it will be reflected to View side represented to user
cells with '1' are clickable and if they gets clicked
they changes their states in the console, every action is followed by printing debug info
it's single user game! don't care about design, just show your approach to impllement basic skeleton



the main goal: exhibit your task understanding,
learning technologies needed for project,
structurizing code \ splitting into logic side and view side (MVVM/MVC understanding will be plus),
we'll analyze your approach of task resolving, common direction of your minds



the task will consist of such steps:
1) file reading which has 10 rows and 10 columns filled with '1' and '0' where '1' is unit, '0' is sea block
for example 1001001000
..........
N rows where N = 10
2) each cell of the file with 0 or 1 will represent your instance of Unit class inherited from QObject
Unit has properties like clickability (whether this is sea block or not)
states like explosed if the user hit your unit is followed by signal throwing to qml to change view of the item
3) intermediary layer between View part and Model part is your communication and logic to process actions like clicking,
changing states of Model part(units) and notifing over qt signals back to qml (View part) to change image/status of clicked Unit



You will get acquainted with qt signals/slots, Q_PROPERTY, QObject, qml GridView (optional)

your solution must be provided as github/bitbucket link in 5 days!
