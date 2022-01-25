import QtQuick 2.15
import QtQuick.Window 2.15
import QtQuick.Controls 2.0
import UnitClass 1


Window {
    width: 640
    height: 480
    visible: true


    Unit{
        id:myUnit
    }


    Button{
        id: mybutton
        anchors.centerIn: parent
        text: "Click me!"
        palette.buttonText: "black"

        onClicked: myUnit.setClickability(false);
    }
    Text{
        id:mylabel
        anchors
        {
            top: parent.top
            horizontalCenter: parent.horizontalCenter
            topMargin: 20
        }
        font.pixelSize: 24
        text: myUnit.clickability
    }

}
