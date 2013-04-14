#ifndef COOPERATION_H
#define COOPERATION_H

#include <TaoApiCpp/TaoDomain.h>
#include <QDateTime>
#include <QList>
#include <QString>


/**
 * @brief 合作分销关系
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class Cooperation : public TaoDomain
{

public:
 virtual ~Cooperation() { }

  QList<QString> getAuthPayway() const;
  void setAuthPayway (QList<QString> authPayway);
  qlonglong getCooperateId() const;
  void setCooperateId (qlonglong cooperateId);
  qlonglong getDistributorId() const;
  void setDistributorId (qlonglong distributorId);
  QString getDistributorNick() const;
  void setDistributorNick (QString distributorNick);
  QDateTime getEndDate() const;
  void setEndDate (QDateTime endDate);
  qlonglong getGradeId() const;
  void setGradeId (qlonglong gradeId);
  QString getProductLine() const;
  void setProductLine (QString productLine);
  QDateTime getStartDate() const;
  void setStartDate (QDateTime startDate);
  QString getStatus() const;
  void setStatus (QString status);
  qlonglong getSupplierId() const;
  void setSupplierId (qlonglong supplierId);
  QString getSupplierNick() const;
  void setSupplierNick (QString supplierNick);
  QString getTradeType() const;
  void setTradeType (QString tradeType);
  
  virtual void parseResponse();

private:
/**
 * @brief 供应商授权的支付方式：ALIPAY(支付宝)、OFFPREPAY(预付款)、OFFTRANSFER(转帐)、OFFSETTLEMENT(后期结算)
 **/
  QList<QString> authPayway;

/**
 * @brief 合作关系ID
 **/
  qlonglong cooperateId;

/**
 * @brief 分销商ID
 **/
  qlonglong distributorId;

/**
 * @brief 分销商nick
 **/
  QString distributorNick;

/**
 * @brief 合作终止时间
 **/
  QDateTime endDate;

/**
 * @brief 等级ID
 **/
  qlonglong gradeId;

/**
 * @brief 授权产品线
 **/
  QString productLine;

/**
 * @brief 合作起始时间
 **/
  QDateTime startDate;

/**
 * @brief NORMAL END ENDING
 **/
  QString status;

/**
 * @brief 供应商ID
 **/
  qlonglong supplierId;

/**
 * @brief 供应商NICK
 **/
  QString supplierNick;

/**
 * @brief 分销方式： AGENT(代销) 、DEALER(经销)
 **/
  QString tradeType;

};

#endif  /* COOPERATION_H */
