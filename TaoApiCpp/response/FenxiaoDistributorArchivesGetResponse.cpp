#include <TaoApiCpp/response/FenxiaoDistributorArchivesGetResponse.h>

DistributorArchive FenxiaoDistributorArchivesGetResponse::getDistributorArchive() const {
  return distributorArchive;
}
void FenxiaoDistributorArchivesGetResponse::setDistributorArchive (DistributorArchive distributorArchive) {
  this->distributorArchive = distributorArchive;
}
bool FenxiaoDistributorArchivesGetResponse::getIsSuccess() const {
  return isSuccess;
}
void FenxiaoDistributorArchivesGetResponse::setIsSuccess (bool isSuccess) {
  this->isSuccess = isSuccess;
}

void FenxiaoDistributorArchivesGetResponse::parseNormalResponse() {
  parseError();
  if (responseParser->hasName("distributor_archive")) {
  distributorArchive.setParser(responseParser->getObjectParser("distributor_archive"));
  distributorArchive.parseResponse();
  }
  if (responseParser->hasName("is_success")) {
  isSuccess = responseParser->getBoolByName("is_success");
  }

}

