#include <TaoApiCpp/domain/Permission.h>
qlonglong Permission::getIsAuthorize() const {
  return isAuthorize;
}
void Permission::setIsAuthorize (qlonglong isAuthorize) {
  this->isAuthorize = isAuthorize;
}

QString Permission::getParentCode() const {
  return parentCode;
}
void Permission::setParentCode (QString parentCode) {
  this->parentCode = parentCode;
}

QString Permission::getPermissionCode() const {
  return permissionCode;
}
void Permission::setPermissionCode (QString permissionCode) {
  this->permissionCode = permissionCode;
}

QString Permission::getPermissionName() const {
  return permissionName;
}
void Permission::setPermissionName (QString permissionName) {
  this->permissionName = permissionName;
}


void Permission::parseResponse() {
  if (responseParser->hasName("is_authorize")) {
  isAuthorize = responseParser->getNumByName("is_authorize");
  }
  if (responseParser->hasName("parent_code")) {
  parentCode = responseParser->getStrByName("parent_code");
  }
  if (responseParser->hasName("permission_code")) {
  permissionCode = responseParser->getStrByName("permission_code");
  }
  if (responseParser->hasName("permission_name")) {
  permissionName = responseParser->getStrByName("permission_name");
  }

}

