#ifndef LOGISTICSVASITEMCHARGE_H
#define LOGISTICSVASITEMCHARGE_H

#include <TaoApiCpp/TaoDomain.h>
#include <QString>


/**
 * @brief 物流增值服务每项费用
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class LogisticsVasItemCharge : public TaoDomain
{

public:
 virtual ~LogisticsVasItemCharge() { }

  QString getCost() const;
  void setCost (QString cost);
  QString getOriginalCost() const;
  void setOriginalCost (QString originalCost);
  QString getVasCode() const;
  void setVasCode (QString vasCode);
  QString getVasId() const;
  void setVasId (QString vasId);
  
  virtual void parseResponse();

private:
/**
 * @brief 真实价格（折后价）
 **/
  QString cost;

/**
 * @brief 原价
 **/
  QString originalCost;

/**
 * @brief 增值服务的code，为业务标识字段。
 **/
  QString vasCode;

/**
 * @brief 增值服务系统字段，一般以业务字段vas_code为标识。
 **/
  QString vasId;

};

#endif  /* LOGISTICSVASITEMCHARGE_H */
