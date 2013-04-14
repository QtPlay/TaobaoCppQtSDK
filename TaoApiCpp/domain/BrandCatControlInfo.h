#ifndef BRANDCATCONTROLINFO_H
#define BRANDCATCONTROLINFO_H

#include <TaoApiCpp/TaoDomain.h>
#include <QList>
#include <QString>
#include <TaoApiCpp/domain/BrandCatControl.h>


/**
 * @brief 管控的类目以及品牌信息
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class BrandCatControlInfo : public TaoDomain
{

public:
 virtual ~BrandCatControlInfo() { }

  QList<BrandCatControl> getBrandCatControls() const;
  void setBrandCatControls (QList<BrandCatControl> brandCatControls);
  
  virtual void parseResponse();

private:
/**
 * @brief 管控的品牌类目信息，一组列表
 **/
  QList<BrandCatControl> brandCatControls;

};

#endif  /* BRANDCATCONTROLINFO_H */
