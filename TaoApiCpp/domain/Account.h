#ifndef ACCOUNT_H
#define ACCOUNT_H

#include <TaoApiCpp/TaoDomain.h>
#include <QDateTime>
#include <QString>


/**
 * @brief 费用科目
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class Account : public TaoDomain
{

public:
 virtual ~Account() { }

  QString getAccountCode() const;
  void setAccountCode (QString accountCode);
  qlonglong getAccountId() const;
  void setAccountId (qlonglong accountId);
  QString getAccountName() const;
  void setAccountName (QString accountName);
  qlonglong getAccountType() const;
  void setAccountType (qlonglong accountType);
  QDateTime getGmtCreate() const;
  void setGmtCreate (QDateTime gmtCreate);
  QDateTime getGmtModified() const;
  void setGmtModified (QDateTime gmtModified);
  qlonglong getRelatedOrder() const;
  void setRelatedOrder (qlonglong relatedOrder);
  qlonglong getStatus() const;
  void setStatus (qlonglong status);
  
  virtual void parseResponse();

private:
/**
 * @brief 费用科目编码
 **/
  QString accountCode;

/**
 * @brief 费用科目编号
 **/
  qlonglong accountId;

/**
 * @brief 费用科目名称
 **/
  QString accountName;

/**
 * @brief 费用科目类型:1-虚拟账户 2-交易 3-交易佣金 4-服务费 
5-天猫积分 6-其他
 **/
  qlonglong accountType;

/**
 * @brief 创建时间
 **/
  QDateTime gmtCreate;

/**
 * @brief 修改时间
 **/
  QDateTime gmtModified;

/**
 * @brief 是否订单相关:0-订单无关 1-订单相关
 **/
  qlonglong relatedOrder;

/**
 * @brief 状态:0-不可用 1-可用
 **/
  qlonglong status;

};

#endif  /* ACCOUNT_H */
