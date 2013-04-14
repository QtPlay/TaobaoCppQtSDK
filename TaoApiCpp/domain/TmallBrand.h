#ifndef TMALLBRAND_H
#define TMALLBRAND_H

#include <TaoApiCpp/TaoDomain.h>
#include <QString>


/**
 * @brief 天猫搜索品牌信息
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class TmallBrand : public TaoDomain
{

public:
 virtual ~TmallBrand() { }

  qlonglong getBrandId() const;
  void setBrandId (qlonglong brandId);
  QString getBrandName() const;
  void setBrandName (QString brandName);
  
  virtual void parseResponse();

private:
/**
 * @brief 搜索品牌id
 **/
  qlonglong brandId;

/**
 * @brief 搜索品牌名字
 **/
  QString brandName;

};

#endif  /* TMALLBRAND_H */
