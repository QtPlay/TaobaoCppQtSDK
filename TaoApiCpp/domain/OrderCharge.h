#ifndef ORDERCHARGE_H
#define ORDERCHARGE_H

#include <TaoApiCpp/TaoDomain.h>
#include <QString>
#include <TaoApiCpp/domain/TransportCharge.h>
#include <TaoApiCpp/domain/LogisticsVasCharge.h>


/**
 * @brief 物流费用信息
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class OrderCharge : public TaoDomain
{

public:
 virtual ~OrderCharge() { }

  QString getOriginalTotalCost() const;
  void setOriginalTotalCost (QString originalTotalCost);
  QString getOtherCost() const;
  void setOtherCost (QString otherCost);
  QString getTotalCost() const;
  void setTotalCost (QString totalCost);
  QString getTotalSavedCost() const;
  void setTotalSavedCost (QString totalSavedCost);
  TransportCharge getTransportCharge() const;
  void setTransportCharge (TransportCharge transportCharge);
  LogisticsVasCharge getVasCharge() const;
  void setVasCharge (LogisticsVasCharge vasCharge);
  
  virtual void parseResponse();

private:
/**
 * @brief 原总费用
 **/
  QString originalTotalCost;

/**
 * @brief 其他费用
 **/
  QString otherCost;

/**
 * @brief 总费用
 **/
  QString totalCost;

/**
 * @brief 节省费用
 **/
  QString totalSavedCost;

/**
 * @brief 运输费用
 **/
  TransportCharge transportCharge;

/**
 * @brief 增值服务费用
 **/
  LogisticsVasCharge vasCharge;

};

#endif  /* ORDERCHARGE_H */
