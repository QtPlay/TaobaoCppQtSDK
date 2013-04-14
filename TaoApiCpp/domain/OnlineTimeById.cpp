#include <TaoApiCpp/domain/OnlineTimeById.h>
qlonglong OnlineTimeById::getOnlineTimes() const {
  return onlineTimes;
}
void OnlineTimeById::setOnlineTimes (qlonglong onlineTimes) {
  this->onlineTimes = onlineTimes;
}

QString OnlineTimeById::getServiceStaffId() const {
  return serviceStaffId;
}
void OnlineTimeById::setServiceStaffId (QString serviceStaffId) {
  this->serviceStaffId = serviceStaffId;
}


void OnlineTimeById::parseResponse() {
  if (responseParser->hasName("online_times")) {
  onlineTimes = responseParser->getNumByName("online_times");
  }
  if (responseParser->hasName("service_staff_id")) {
  serviceStaffId = responseParser->getStrByName("service_staff_id");
  }

}

