#ifndef SIMBACREATIVESGETRESPONSE_H
#define SIMBACREATIVESGETRESPONSE_H

#include <TaoApiCpp/TaoResponse.h>
#include <QList>
#include <TaoApiCpp/domain/Creative.h>


/**
 * @brief TOP RESPONSE API: 取得一个推广组的所有创意或者根据一个创意Id列表取得一组创意； 
如果同时提供了推广组Id和创意id列表，则优先使用推广组Id；
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class SimbaCreativesGetResponse : public TaoResponse
{
public:
 virtual ~SimbaCreativesGetResponse() { }

  QList<Creative> getCreatives() const;
  void setCreatives (QList<Creative> creatives);
  virtual void parseNormalResponse();

 private:
/**
 * @brief 创意对象列表
 **/
  QList<Creative> creatives;

};

#endif
