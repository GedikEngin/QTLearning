import QtQuick 2.15
import QtQuick.Controls 2.15

ApplicationWindow {
    visible: true
    width: 640
    height: 480
    title: "Hello Qt QML"

    Button {
        text: "Click Me"
        anchors.centerIn: parent
        onClicked: {
            console.log("Button was clicked")
        }
    }
}

// creates a basic window with a button
// button console logs a trigger when clicked

