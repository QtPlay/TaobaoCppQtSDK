#ifndef DISTRIBUTOR_H
#define DISTRIBUTOR_H

#include <TaoApiCpp/TaoDomain.h>
#include <QDateTime>
#include <QString>


/**
 * @brief 分销API返回数据结构
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class Distributor : public TaoDomain
{

public:
 virtual ~Distributor() { }

  QString getAlipayAccount() const;
  void setAlipayAccount (QString alipayAccount);
  qlonglong getAppraise() const;
  void setAppraise (qlonglong appraise);
  qlonglong getCategoryId() const;
  void setCategoryId (qlonglong categoryId);
  QString getContactPerson() const;
  void setContactPerson (QString contactPerson);
  QDateTime getCreated() const;
  void setCreated (QDateTime created);
  qlonglong getDistributorId() const;
  void setDistributorId (qlonglong distributorId);
  QString getDistributorName() const;
  void setDistributorName (QString distributorName);
  QString getEmail() const;
  void setEmail (QString email);
  QString getFullName() const;
  void setFullName (QString fullName);
  qlonglong getLevel() const;
  void setLevel (qlonglong level);
  QString getMobilePhone() const;
  void setMobilePhone (QString mobilePhone);
  QString getPhone() const;
  void setPhone (QString phone);
  QString getShopWebLink() const;
  void setShopWebLink (QString shopWebLink);
  QDateTime getStarts() const;
  void setStarts (QDateTime starts);
  qlonglong getUserId() const;
  void setUserId (qlonglong userId);
  
  virtual void parseResponse();

private:
/**
 * @brief 分销商的支付宝帐户
 **/
  QString alipayAccount;

/**
 * @brief 分销商的淘宝卖家评价
 **/
  qlonglong appraise;

/**
 * @brief 分销商店铺主营类目
 **/
  qlonglong categoryId;

/**
 * @brief 联系人
 **/
  QString contactPerson;

/**
 * @brief 分销商创建时间 时间格式：yyyy-MM-dd HH:mm:ss
 **/
  QDateTime created;

/**
 * @brief 分销商Id
 **/
  qlonglong distributorId;

/**
 * @brief 分销商姓名
 **/
  QString distributorName;

/**
 * @brief 分销商的email
 **/
  QString email;

/**
 * @brief 分销商的真实姓名，认证姓名
 **/
  QString fullName;

/**
 * @brief 店铺等级
 **/
  qlonglong level;

/**
 * @brief 分销商的手机号
 **/
  QString mobilePhone;

/**
 * @brief 分销商的电话
 **/
  QString phone;

/**
 * @brief 分销商的网店链接
 **/
  QString shopWebLink;

/**
 * @brief 分销商卖家的开店时间
 **/
  QDateTime starts;

/**
 * @brief 分销商ID
 **/
  qlonglong userId;

};

#endif  /* DISTRIBUTOR_H */
