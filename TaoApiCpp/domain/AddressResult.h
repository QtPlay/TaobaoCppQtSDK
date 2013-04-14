#ifndef ADDRESSRESULT_H
#define ADDRESSRESULT_H

#include <TaoApiCpp/TaoDomain.h>
#include <QDateTime>
#include <QString>


/**
 * @brief 地址库返回数据信息
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class AddressResult : public TaoDomain
{

public:
 virtual ~AddressResult() { }

  QString getAddr() const;
  void setAddr (QString addr);
  qlonglong getAreaId() const;
  void setAreaId (qlonglong areaId);
  bool getCancelDef() const;
  void setCancelDef (bool cancelDef);
  QString getCity() const;
  void setCity (QString city);
  qlonglong getContactId() const;
  void setContactId (qlonglong contactId);
  QString getContactName() const;
  void setContactName (QString contactName);
  QString getCountry() const;
  void setCountry (QString country);
  bool getGetDef() const;
  void setGetDef (bool getDef);
  QString getMemo() const;
  void setMemo (QString memo);
  QString getMobilePhone() const;
  void setMobilePhone (QString mobilePhone);
  QDateTime getModifyDate() const;
  void setModifyDate (QDateTime modifyDate);
  QString getPhone() const;
  void setPhone (QString phone);
  QString getProvince() const;
  void setProvince (QString province);
  QString getSellerCompany() const;
  void setSellerCompany (QString sellerCompany);
  bool getSendDef() const;
  void setSendDef (bool sendDef);
  QString getZipCode() const;
  void setZipCode (QString zipCode);
  
  virtual void parseResponse();

private:
/**
 * @brief 详细街道地址，不需要重复填写省/市/区
 **/
  QString addr;

/**
 * @brief 区域ID
 **/
  qlonglong areaId;

/**
 * @brief 是否默认退货地址
 **/
  bool cancelDef;

/**
 * @brief 市
 **/
  QString city;

/**
 * @brief 地址库ID
 **/
  qlonglong contactId;

/**
 * @brief 联系人姓名
 **/
  QString contactName;

/**
 * @brief 区、县
 **/
  QString country;

/**
 * @brief 是否默认取货地址
 **/
  bool getDef;

/**
 * @brief 备注
 **/
  QString memo;

/**
 * @brief 手机号码，手机与电话必需有一个  
手机号码不能超过20位
 **/
  QString mobilePhone;

/**
 * @brief 修改日期时间
 **/
  QDateTime modifyDate;

/**
 * @brief 电话号码,手机与电话必需有一个
 **/
  QString phone;

/**
 * @brief 省
 **/
  QString province;

/**
 * @brief 公司名称,
 **/
  QString sellerCompany;

/**
 * @brief 是否默认发货地址
 **/
  bool sendDef;

/**
 * @brief 地区邮政编码
 **/
  QString zipCode;

};

#endif  /* ADDRESSRESULT_H */
