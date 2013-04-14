#ifndef LOCALITYLIFE_H
#define LOCALITYLIFE_H

#include <TaoApiCpp/TaoDomain.h>
#include <QString>


/**
 * @brief 本地生活垂直市场数据结构，修改宝贝时在参数empty_fields里设置locality_life可删除所有电子凭证信息
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class LocalityLife : public TaoDomain
{

public:
 virtual ~LocalityLife() { }

  QString getChooseLogis() const;
  void setChooseLogis (QString chooseLogis);
  QString getExpirydate() const;
  void setExpirydate (QString expirydate);
  QString getMerchant() const;
  void setMerchant (QString merchant);
  QString getNetworkId() const;
  void setNetworkId (QString networkId);
  qlonglong getOnsaleAutoRefundRatio() const;
  void setOnsaleAutoRefundRatio (qlonglong onsaleAutoRefundRatio);
  qlonglong getRefundRatio() const;
  void setRefundRatio (qlonglong refundRatio);
  QString getVerification() const;
  void setVerification (QString verification);
  
  virtual void parseResponse();

private:
/**
 * @brief 表示是否使用邮寄 0: 代表不使用邮寄； 1：代表使用邮寄；如果不设置这个值，代表不使用邮寄
 **/
  QString chooseLogis;

/**
 * @brief 电子交易凭证有效期，有三种格式： 
如果有效期为起止日期类型，此值为2012-08-06,2012-08-16  
如果有效期为【购买成功日 至】类型则格式为2012-08-16 
如果有效期为天数类型则格式为15
 **/
  QString expirydate;

/**
 * @brief 格式为  
码商id:nick
 **/
  QString merchant;

/**
 * @brief 网点ID,在参数empty_fields里设置locality_life.network_id可删除网点ID
 **/
  QString networkId;

/**
 * @brief 电子凭证售中自动退款比例
 **/
  qlonglong onsaleAutoRefundRatio;

/**
 * @brief 退款比例，百分比%前的数字，1-100的正整数值；在参数empty_fields里设置locality_life.refund_ratio可删除退款比例
 **/
  qlonglong refundRatio;

/**
 * @brief 核销打款:1代表核销打款,0代表非核销打款; 
在参数empty_fields里设置locality_life.verification可删除核销打款
 **/
  QString verification;

};

#endif  /* LOCALITYLIFE_H */
