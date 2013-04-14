#include <TaoApiCpp/domain/WaitingTimeById.h>
qlonglong WaitingTimeById::getAvgWaitingTimes() const {
  return avgWaitingTimes;
}
void WaitingTimeById::setAvgWaitingTimes (qlonglong avgWaitingTimes) {
  this->avgWaitingTimes = avgWaitingTimes;
}

QString WaitingTimeById::getServiceStaffId() const {
  return serviceStaffId;
}
void WaitingTimeById::setServiceStaffId (QString serviceStaffId) {
  this->serviceStaffId = serviceStaffId;
}


void WaitingTimeById::parseResponse() {
  if (responseParser->hasName("avg_waiting_times")) {
  avgWaitingTimes = responseParser->getNumByName("avg_waiting_times");
  }
  if (responseParser->hasName("service_staff_id")) {
  serviceStaffId = responseParser->getStrByName("service_staff_id");
  }

}

