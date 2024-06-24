import QtQuick 2.15
import QtQuick.Window 2.15
import QtQuick.Controls 2.15
Window {
    width: 640
    height: 480
    visible: true
    title: qsTr("Hello World")
    Column{
            anchors.centerIn: parent
        Button{

            width : 100
            height : 100
            text:"+"
            onClicked: {
                Engin.increaseValue();
            }
        }
        Text{
            text:Engin.var

        }

        Button{
            width : 100
            height : 100
            text:"-"
            onClicked: {
                Engin.decreaseValue();
            }
        }


    }


}
