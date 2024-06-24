import QtQuick 2.15
import QtQuick.Controls 2.15
import QtGraphicalEffects 1.15

ApplicationWindow {
    visible: true
    width: 640
    height: 480
    title: "Hello Qt QML"
    background: LinearGradient {
        start: Qt.point(0, 0)
        end: Qt.point(640, 480)
        gradient: Gradient {
            GradientStop { position: 0.0 ; color: "red"}
            GradientStop { position: 1.0 ; color: "blue"}
        }
    }

    Button {
        text: "Click Me"
        anchors.centerIn: parent
        background: Rectangle {
            color: "red"
            radius: 1
            }

            onClicked: {
            console.log("Button was clicked")
        }
    }
}
