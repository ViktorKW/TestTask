import QtQuick 2.15
import QtQuick.Window 2.15
import QtQuick.Controls 2.0


Rectangle{
    width: 1000
    height: 1000
    color:"black"

    ListModel{
            id:nameModel
            Component.onCompleted: {
                for(var i = 0; i < _unitList.count; i++){
                    nameModel.append({})  //adding empty ListElements to generate GridView components
                }
            }
        }


    Component{
            id:nameDelegate

            Button{
                height: 80
                width: 80
                palette{

                    button: "blue"
                }

                enabled: _unitList.unitAt(model.index).isClickable ? true : false
                onClicked:{
                    _unitList.unitAt(model.index).setIsClickable(false);


                    _unitList.unitAt(model.index).isShip ?
                                palette.button = "darkred" :
                                palette.button = "darkblue"
                    _unitList.unitAt(model.index).setIsShip(false);

                }


            }
        }


    GridView{
            anchors.fill: parent
            model: nameModel
            delegate: nameDelegate
            clip: true
        }
}






















//import QtQuick 2.15
//import QtQuick.Window 2.15
//import QtQuick.Controls 2.0


//Rectangle{
//    width: 1000
//    height: 1000
//    color:"black"

//    ListModel{
//            id:nameModel
//            Component.onCompleted: {
//                for(var i = 0; i < _unitList.count; i++){
//                    nameModel.append({})  //adding empty ListElements to generate GridView components
//                }
//            }
//        }


//    Component{
//            id:nameDelegate

//            Button{
//                height: 80
//                width: 80
//                palette{

//                    button: "blue"
//                }

//                enabled: _unitList.unitAt(model.index).isClickable ? true : false
//                onClicked:{
//                    _unitList.unitAt(model.index).isClickable ?
//                                _unitList.unitAt(model.index).isClickable = false :
//                                _unitList.unitAt(model.index).isClickable = true


//                    _unitList.unitAt(model.index).isShip ?
//                                palette.button = "darkred" :
//                                palette.button = "darkblue"

//                }


//            }
//        }


//    GridView{
//            anchors.fill: parent
//            model: nameModel
//            delegate: nameDelegate
//            clip: true
//        }
//}

