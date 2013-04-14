#ifndef FOODSECURITY_H
#define FOODSECURITY_H

#include <TaoApiCpp/TaoDomain.h>
#include <QString>


/**
 * @brief 食品安全信息，包括： 
生产许可证号、产品标准号、厂名、厂址等
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class FoodSecurity : public TaoDomain
{

public:
 virtual ~FoodSecurity() { }

  QString getContact() const;
  void setContact (QString contact);
  QString getDesignCode() const;
  void setDesignCode (QString designCode);
  QString getFactory() const;
  void setFactory (QString factory);
  QString getFactorySite() const;
  void setFactorySite (QString factorySite);
  QString getFoodAdditive() const;
  void setFoodAdditive (QString foodAdditive);
  QString getMix() const;
  void setMix (QString mix);
  QString getPeriod() const;
  void setPeriod (QString period);
  QString getPlanStorage() const;
  void setPlanStorage (QString planStorage);
  QString getPrdLicenseNo() const;
  void setPrdLicenseNo (QString prdLicenseNo);
  QString getProductDateEnd() const;
  void setProductDateEnd (QString productDateEnd);
  QString getProductDateStart() const;
  void setProductDateStart (QString productDateStart);
  QString getStockDateEnd() const;
  void setStockDateEnd (QString stockDateEnd);
  QString getStockDateStart() const;
  void setStockDateStart (QString stockDateStart);
  QString getSupplier() const;
  void setSupplier (QString supplier);
  
  virtual void parseResponse();

private:
/**
 * @brief 厂家联系方式
 **/
  QString contact;

/**
 * @brief 产品标准号
 **/
  QString designCode;

/**
 * @brief 厂名
 **/
  QString factory;

/**
 * @brief 厂址
 **/
  QString factorySite;

/**
 * @brief 食品添加剂
 **/
  QString foodAdditive;

/**
 * @brief 配料表
 **/
  QString mix;

/**
 * @brief 保质期
 **/
  QString period;

/**
 * @brief 储藏方法
 **/
  QString planStorage;

/**
 * @brief 生产许可证号
 **/
  QString prdLicenseNo;

/**
 * @brief 生产结束日期
 **/
  QString productDateEnd;

/**
 * @brief 生产开始日期
 **/
  QString productDateStart;

/**
 * @brief 进货结束日期，要在生产日期之后
 **/
  QString stockDateEnd;

/**
 * @brief 进货开始日期，要在生产日期之后
 **/
  QString stockDateStart;

/**
 * @brief 供货商
 **/
  QString supplier;

};

#endif  /* FOODSECURITY_H */
