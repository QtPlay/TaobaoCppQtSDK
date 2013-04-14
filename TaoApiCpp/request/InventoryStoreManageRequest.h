#ifndef INVENTORYSTOREMANAGEREQUEST_H
#define INVENTORYSTOREMANAGEREQUEST_H

#include <TaoApiCpp/TaoRequest.h>
#include <TaoApiCpp/TaoParser.h>
#include <TaoApiCpp/response/InventoryStoreManageResponse.h>

/**
 * TOP API: 创建商家仓或者更新商家仓信息
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class InventoryStoreManageRequest : public TaoRequest
{
 public:
  virtual QString getApiMethodName() const;

 QString getAddress() const
;  void setAddress (QString address);

 QString getAddressAreaName() const
;  void setAddressAreaName (QString addressAreaName);

 QString getAliasName() const
;  void setAliasName (QString aliasName);

 QString getContact() const
;  void setContact (QString contact);

 QString getOperateType() const
;  void setOperateType (QString operateType);

 QString getPhone() const
;  void setPhone (QString phone);

 qlonglong getPostcode() const
;  void setPostcode (qlonglong postcode);

 QString getStoreCode() const
;  void setStoreCode (QString storeCode);

 QString getStoreName() const
;  void setStoreName (QString storeName);

 QString getStoreType() const
;  void setStoreType (QString storeType);


  virtual InventoryStoreManageResponse *getResponseClass(const QString &session = "",
                               const QString &accessToken = ""); 

 private:
/**
 * @brief 仓库的物理地址，可更新
 **/
  QString address;

/**
 * @brief 仓库区域名，可更新
 **/
  QString addressAreaName;

/**
 * @brief 仓库简称，可更新
 **/
  QString aliasName;

/**
 * @brief 联系人，可更新
 **/
  QString contact;

/**
 * @brief 参数定义，ADD：新建; UPDATE：更新
 **/
  QString operateType;

/**
 * @brief 联系电话，可更新
 **/
  QString phone;

/**
 * @brief 邮编，可更新
 **/
  qlonglong postcode;

/**
 * @brief 商家的仓库编码，不允许重复，不允许更新
 **/
  QString storeCode;

/**
 * @brief 商家的仓库名称，可更新
 **/
  QString storeName;

/**
 * @brief 仓库类型，可更新。目前只支持自有仓，TYPE_OWN：自有物理仓
 **/
  QString storeType;

};

#endif  /* INVENTORYSTOREMANAGEREQUEST_H */
