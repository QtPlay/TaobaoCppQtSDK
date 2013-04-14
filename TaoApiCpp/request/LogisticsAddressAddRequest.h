#ifndef LOGISTICSADDRESSADDREQUEST_H
#define LOGISTICSADDRESSADDREQUEST_H

#include <TaoApiCpp/TaoRequest.h>
#include <TaoApiCpp/TaoParser.h>
#include <TaoApiCpp/response/LogisticsAddressAddResponse.h>

/**
 * TOP API: 通过此接口新增卖家地址库,卖家最多可添加5条地址库,新增第一条卖家地址，将会自动设为默认地址库
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class LogisticsAddressAddRequest : public TaoRequest
{
 public:
  virtual QString getApiMethodName() const;

 QString getAddr() const
;  void setAddr (QString addr);

 bool getCancelDef() const
;  void setCancelDef (bool cancelDef);

 QString getCity() const
;  void setCity (QString city);

 QString getContactName() const
;  void setContactName (QString contactName);

 QString getCountry() const
;  void setCountry (QString country);

 bool getGetDef() const
;  void setGetDef (bool getDef);

 QString getMemo() const
;  void setMemo (QString memo);

 QString getMobilePhone() const
;  void setMobilePhone (QString mobilePhone);

 QString getPhone() const
;  void setPhone (QString phone);

 QString getProvince() const
;  void setProvince (QString province);

 QString getSellerCompany() const
;  void setSellerCompany (QString sellerCompany);

 QString getZipCode() const
;  void setZipCode (QString zipCode);


  virtual LogisticsAddressAddResponse *getResponseClass(const QString &session = "",
                               const QString &accessToken = ""); 

 private:
/**
 * @brief 详细街道地址，不需要重复填写省/市/区
 **/
  QString addr;

/**
 * @brief 默认退货地址。<br> 
<font color='red'>选择此项(true)，将当前地址设为默认退货地址，撤消原默认退货地址</font>
 **/
  bool cancelDef;

/**
 * @brief 所在市
 **/
  QString city;

/**
 * @brief 联系人姓名 <font color='red'>长度不可超过20个字节</font>
 **/
  QString contactName;

/**
 * @brief 区、县 
<br><font color='red'>如果所在地区是海外的可以为空，否则为必参</font>
 **/
  QString country;

/**
 * @brief 默认取货地址。<br> 
<font color='red'>选择此项(true)，将当前地址设为默认取货地址，撤消原默认取货地址</font>
 **/
  bool getDef;

/**
 * @brief 备注,<br><font color='red'>备注不能超过256字节</font>
 **/
  QString memo;

/**
 * @brief 手机号码，手机与电话必需有一个 
<br><font color='red'>手机号码不能超过20位</font>
 **/
  QString mobilePhone;

/**
 * @brief 电话号码,手机与电话必需有一个
 **/
  QString phone;

/**
 * @brief 所在省
 **/
  QString province;

/**
 * @brief 公司名称,<br><font color="red">公司名称长能不能超过20字节</font>
 **/
  QString sellerCompany;

/**
 * @brief 地区邮政编码 
<br><font color='red'>如果所在地区是海外的可以为空，否则为必参</font>
 **/
  QString zipCode;

};

#endif  /* LOGISTICSADDRESSADDREQUEST_H */
