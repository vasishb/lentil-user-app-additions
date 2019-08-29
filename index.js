const window = require("./active-win");
const systemIdle = require("./desktop-idle");

const getActiveWindow = async() => {
    const activeWindow = await window();
    return activeWindow;
};

const getSystemIdleTime = async() => {
    const idleTime = await systemIdle.getIdleTime();
    return idleTime;
};

const desktopMouseWheelIdleTime = async() => {
    const idleTime = await systemIdle.desktopMouseWheelIdleTime();
    return idleTime;
};

const desktopMouseMoveIdleTime = async() => {
    const idleTime = await systemIdle.desktopMouseMoveIdleTime();
    return idleTime;
};

const desktopKeyDownIdleTime = async() => {
    const idleTime = await systemIdle.desktopKeyDownIdleTime();
    return idleTime;
};

const desktopLeftMouseClickIdleTime = async() => {
    const idleTime = await systemIdle.desktopLeftMouseClickIdleTime();
    return idleTime;
};

const desktopRightMouseClickIdleTime = async() => {
    const idleTime = await systemIdle.desktopRightMouseClickIdleTime();
    return idleTime;
};

module.exports = {
  getActiveWindow,
  getSystemIdleTime,
  desktopMouseWheelIdleTime,
  desktopKeyDownIdleTime,
  desktopLeftMouseClickIdleTime,
  desktopRightMouseClickIdleTime,
  desktopMouseMoveIdleTime,
};
