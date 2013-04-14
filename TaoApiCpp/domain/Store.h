#ifndef STORE_H
#define STORE_H

#include <TaoApiCpp/TaoDomain.h>
#include <QString>


/**
 * @brief 仓库对象
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class Store : public TaoDomain
{

public:
 virtual ~Store() { }

  QString getAddress() const;
  void setAddress (QString address);
  QString getAddressAreaName() const;
  void setAddressAreaName (QString addressAreaName);
  QString getAliasName() const;
  void setAliasName (QString aliasName);
  QString getContact() const;
  void setContact (QString contact);
  QString getPhone() const;
  void setPhone (QString phone);
  QString getPostCode() const;
  void setPostCode (QString postCode);
  QString getStoreCode() const;
  void setStoreCode (QString storeCode);
  QString getStoreName() const;
  void setStoreName (QString storeName);
  QString getStoreType() const;
  void setStoreType (QString storeType);
  
  virtual void parseResponse();

private:
/**
 * @brief 仓库的物理地址
 **/
  QString address;

/**
 * @brief 仓库对应的淘宝区域
 **/
  QString addressAreaName;

/**
 * @brief 仓库简称
 **/
  QString aliasName;

/**
 * @brief 联系人
 **/
  QString contact;

/**
 * @brief 联系电话
 **/
  QString phone;

/**
 * @brief 邮编
 **/
  QString postCode;

/**
 * @brief 商家的仓库编码，不允许重复
 **/
  QString storeCode;

/**
 * @brief 商家的仓库名称
 **/
  QString storeName;

/**
 * @brief 仓库类型
 **/
  QString storeType;

};

#endif  /* STORE_H */
