
"use strict";

let LoadExternalMap = require('./LoadExternalMap.js')
let AddCO2Source = require('./AddCO2Source.js')
let LoadMap = require('./LoadMap.js')
let DeleteThermalSource = require('./DeleteThermalSource.js')
let DeleteCO2Source = require('./DeleteCO2Source.js')
let MoveRobot = require('./MoveRobot.js')
let AddRfidTag = require('./AddRfidTag.js')
let DeleteRfidTag = require('./DeleteRfidTag.js')
let RegisterGui = require('./RegisterGui.js')
let DeleteSoundSource = require('./DeleteSoundSource.js')
let AddThermalSource = require('./AddThermalSource.js')
let AddSoundSource = require('./AddSoundSource.js')

module.exports = {
  LoadExternalMap: LoadExternalMap,
  AddCO2Source: AddCO2Source,
  LoadMap: LoadMap,
  DeleteThermalSource: DeleteThermalSource,
  DeleteCO2Source: DeleteCO2Source,
  MoveRobot: MoveRobot,
  AddRfidTag: AddRfidTag,
  DeleteRfidTag: DeleteRfidTag,
  RegisterGui: RegisterGui,
  DeleteSoundSource: DeleteSoundSource,
  AddThermalSource: AddThermalSource,
  AddSoundSource: AddSoundSource,
};
