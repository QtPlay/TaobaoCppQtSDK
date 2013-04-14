#include <TaoApiCpp/domain/Role.h>
QDateTime Role::getCreateTime() const {
  return createTime;
}
void Role::setCreateTime (QDateTime createTime) {
  this->createTime = createTime;
}

QString Role::getDescription() const {
  return description;
}
void Role::setDescription (QString description) {
  this->description = description;
}

QDateTime Role::getModifiedTime() const {
  return modifiedTime;
}
void Role::setModifiedTime (QDateTime modifiedTime) {
  this->modifiedTime = modifiedTime;
}

QList<Permission> Role::getPermissions() const {
  return permissions;
}
void Role::setPermissions (QList<Permission> permissions) {
  this->permissions = permissions;
}

qlonglong Role::getRoleId() const {
  return roleId;
}
void Role::setRoleId (qlonglong roleId) {
  this->roleId = roleId;
}

QString Role::getRoleName() const {
  return roleName;
}
void Role::setRoleName (QString roleName) {
  this->roleName = roleName;
}

qlonglong Role::getSellerId() const {
  return sellerId;
}
void Role::setSellerId (qlonglong sellerId) {
  this->sellerId = sellerId;
}


void Role::parseResponse() {
  if (responseParser->hasName("create_time")) {
  createTime = responseParser->getDateByName("create_time");
  }
  if (responseParser->hasName("description")) {
  description = responseParser->getStrByName("description");
  }
  if (responseParser->hasName("modified_time")) {
  modifiedTime = responseParser->getDateByName("modified_time");
  }
  if (responseParser->hasName("permissions")) {
  QList<Parser *> listParser = responseParser->getListObjectParser("permissions");
  Parser *parser;
  foreach (parser, listParser) {
    Permission tmp;
    tmp.setParser(parser);
    tmp.parseResponse();
    permissions.append(tmp);
  }
  }
  if (responseParser->hasName("role_id")) {
  roleId = responseParser->getNumByName("role_id");
  }
  if (responseParser->hasName("role_name")) {
  roleName = responseParser->getStrByName("role_name");
  }
  if (responseParser->hasName("seller_id")) {
  sellerId = responseParser->getNumByName("seller_id");
  }

}

