#include <TaoApiCpp/domain/DescModuleInfo.h>
QString DescModuleInfo::getAnchorModuleIds() const {
  return anchorModuleIds;
}
void DescModuleInfo::setAnchorModuleIds (QString anchorModuleIds) {
  this->anchorModuleIds = anchorModuleIds;
}

qlonglong DescModuleInfo::getType() const {
  return type;
}
void DescModuleInfo::setType (qlonglong type) {
  this->type = type;
}


void DescModuleInfo::parseResponse() {
  if (responseParser->hasName("anchor_module_ids")) {
  anchorModuleIds = responseParser->getStrByName("anchor_module_ids");
  }
  if (responseParser->hasName("type")) {
  type = responseParser->getNumByName("type");
  }

}

