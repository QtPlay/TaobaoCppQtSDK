#ifndef LOGISTICSVASCHARGE_H
#define LOGISTICSVASCHARGE_H

#include <TaoApiCpp/TaoDomain.h>
#include <QList>
#include <QString>
#include <TaoApiCpp/domain/LogisticsVasItemCharge.h>


/**
 * @brief 增值服务的总的费用
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class LogisticsVasCharge : public TaoDomain
{

public:
 virtual ~LogisticsVasCharge() { }

  QString getOriginalTotalVasCost() const;
  void setOriginalTotalVasCost (QString originalTotalVasCost);
  QString getTotalVasCost() const;
  void setTotalVasCost (QString totalVasCost);
  QString getTotalVasSaveCost() const;
  void setTotalVasSaveCost (QString totalVasSaveCost);
  QList<LogisticsVasItemCharge> getVasCostList() const;
  void setVasCostList (QList<LogisticsVasItemCharge> vasCostList);
  
  virtual void parseResponse();

private:
/**
 * @brief 原始总费用
 **/
  QString originalTotalVasCost;

/**
 * @brief 总费用
 **/
  QString totalVasCost;

/**
 * @brief 节省的费用。即原始费用-现在费用
 **/
  QString totalVasSaveCost;

/**
 * @brief 增值服务每项费用
 **/
  QList<LogisticsVasItemCharge> vasCostList;

};

#endif  /* LOGISTICSVASCHARGE_H */
