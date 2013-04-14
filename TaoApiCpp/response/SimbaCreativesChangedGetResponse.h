#ifndef SIMBACREATIVESCHANGEDGETRESPONSE_H
#define SIMBACREATIVESCHANGEDGETRESPONSE_H

#include <TaoApiCpp/TaoResponse.h>
#include <TaoApiCpp/domain/CreativePage.h>


/**
 * @brief TOP RESPONSE API: 分页获取修改过的广告创意ID和修改时间
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class SimbaCreativesChangedGetResponse : public TaoResponse
{
public:
 virtual ~SimbaCreativesChangedGetResponse() { }

  CreativePage getCreatives() const;
  void setCreatives (CreativePage creatives);
  virtual void parseNormalResponse();

 private:
/**
 * @brief 广告创意分页对象
 **/
  CreativePage creatives;

};

#endif
