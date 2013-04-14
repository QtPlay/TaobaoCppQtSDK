#ifndef AFTERSALE_H
#define AFTERSALE_H

#include <TaoApiCpp/TaoDomain.h>
#include <QString>


/**
 * @brief 卖家设置售后服务对象
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class AfterSale : public TaoDomain
{

public:
 virtual ~AfterSale() { }

  qlonglong getAfterSaleId() const;
  void setAfterSaleId (qlonglong afterSaleId);
  QString getAfterSaleName() const;
  void setAfterSaleName (QString afterSaleName);
  QString getAfterSalePath() const;
  void setAfterSalePath (QString afterSalePath);
  
  virtual void parseResponse();

private:
/**
 * @brief id
 **/
  qlonglong afterSaleId;

/**
 * @brief 名称
 **/
  QString afterSaleName;

/**
 * @brief tfs地址
 **/
  QString afterSalePath;

};

#endif  /* AFTERSALE_H */
