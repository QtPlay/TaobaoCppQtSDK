#ifndef RANDCATCONTROLGETRESPONSE_H
#define RANDCATCONTROLGETRESPONSE_H

#include <TaoApiCpp/TaoResponse.h>
#include <TaoApiCpp/domain/BrandCatControlInfo.h>


/**
 * @brief TOP RESPONSE API: 获取到所有的类目，品牌的控制信息，达尔文类目是会以品牌和类目作为控制的力度来管理商品，所有的控制信息可以通过这个接口获取到信息。
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class RandcatControlGetResponse : public TaoResponse
{
public:
 virtual ~RandcatControlGetResponse() { }

  BrandCatControlInfo getBrandCatControlInfo() const;
  void setBrandCatControlInfo (BrandCatControlInfo brandCatControlInfo);
  virtual void parseNormalResponse();

 private:
/**
 * @brief 被管控的类目和品牌信息。如何判断一个产品是否被管控，是去品牌的信息和类目信息做一个交集。
 **/
  BrandCatControlInfo brandCatControlInfo;

};

#endif
