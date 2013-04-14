#ifndef LOGISTICSPARTNER_H
#define LOGISTICSPARTNER_H

#include <TaoApiCpp/TaoDomain.h>
#include <QString>
#include <TaoApiCpp/domain/CarriageDetail.h>
#include <TaoApiCpp/domain/PartnerDetail.h>


/**
 * @brief 查询揽送范围之内的物流公司信息
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class LogisticsPartner : public TaoDomain
{

public:
 virtual ~LogisticsPartner() { }

  CarriageDetail getCarriage() const;
  void setCarriage (CarriageDetail carriage);
  QString getCoverRemark() const;
  void setCoverRemark (QString coverRemark);
  PartnerDetail getPartner() const;
  void setPartner (PartnerDetail partner);
  QString getUncoverRemark() const;
  void setUncoverRemark (QString uncoverRemark);
  
  virtual void parseResponse();

private:
/**
 * @brief 物流公司揽收和资费详细信息
 **/
  CarriageDetail carriage;

/**
 * @brief 揽收说明信息
 **/
  QString coverRemark;

/**
 * @brief 物流公司详细信息
 **/
  PartnerDetail partner;

/**
 * @brief 不可送达的说明信息
 **/
  QString uncoverRemark;

};

#endif  /* LOGISTICSPARTNER_H */
