import QtQuick 2.15
import QtQuick.Controls 2.15

ApplicationWindow {
    visible: true
    width: 640
    height: 480
    title: "Hello Qt QML"
    background: Rectangle {
        anchors.fill: parent
        color: "gray" 
    }

    ListView {
        width:200
        height:300
        anchors.centerIn: parent

        model: ListModel {
        ListElement {name: "item 1"}
        ListElement {name: "item 2"}
        ListElement {name: "item 3"}
        }

        delegate: Item {
            width: ListView.view.width
            height: 40
            Text{
            text: name
            font.pixelSize: 20
            anchors.centerIn: parent
            }
        }
    }
}

