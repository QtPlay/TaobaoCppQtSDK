#ifndef PARTNERDETAIL_H
#define PARTNERDETAIL_H

#include <TaoApiCpp/TaoDomain.h>
#include <QString>


/**
 * @brief 物流公司详细信息
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class PartnerDetail : public TaoDomain
{

public:
 virtual ~PartnerDetail() { }

  QString getAccountNo() const;
  void setAccountNo (QString accountNo);
  QString getCompanyCode() const;
  void setCompanyCode (QString companyCode);
  qlonglong getCompanyId() const;
  void setCompanyId (qlonglong companyId);
  QString getCompanyName() const;
  void setCompanyName (QString companyName);
  QString getFullName() const;
  void setFullName (QString fullName);
  QString getRegMailNo() const;
  void setRegMailNo (QString regMailNo);
  QString getWangwangId() const;
  void setWangwangId (QString wangwangId);
  
  virtual void parseResponse();

private:
/**
 * @brief 物流公司支付宝账号
 **/
  QString accountNo;

/**
 * @brief 物流公司代码
 **/
  QString companyCode;

/**
 * @brief 物流公司id
 **/
  qlonglong companyId;

/**
 * @brief 物流公司简称
 **/
  QString companyName;

/**
 * @brief 物流公司全名
 **/
  QString fullName;

/**
 * @brief 运单号验证正则表达式
 **/
  QString regMailNo;

/**
 * @brief 旺旺id
 **/
  QString wangwangId;

};

#endif  /* PARTNERDETAIL_H */
