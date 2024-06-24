import QtQuick 2.15
import QtQuick.Controls 2.15
import QtGraphicalEffects 1.15
// imports graphical effect lib to use
// LinearGradient is dependant on it

ApplicationWindow {
    visible: true
    width: 640
    height: 480
    title: "Hello Qt QML"
    background: LinearGradient { 
        // setting the background to be a liner gradient and then passing params below
        start: Qt.point(0, 0)
        // starting point of the gradient - pixel cords of parent
        end: Qt.point(640, 480)
        // end point of the gradient - pixel cord of the parent
        gradient: Gradient {
            GradientStop { position: 0.0 ; color: "red"}
            // first position and color
            GradientStop { position: 1.0 ; color: "blue"}
            // second position and color
        }
    }

    Button {
        text: "Click Me"
        anchors.centerIn: parent
        background: Rectangle { 
            // basic background setting
            // does not require importing graphics lib
            // params being passed below
            color: "red"
            radius: 10
            // radius effects the curve of background
            // the larger the curve the larger the smoothing effect
            }

            onClicked: {
            console.log("Button was clicked")
        }
    }
}
