#ifndef SIMBANONSEARCHALLDEMOGRAPHICSGETRESPONSE_H
#define SIMBANONSEARCHALLDEMOGRAPHICSGETRESPONSE_H

#include <TaoApiCpp/TaoResponse.h>
#include <QList>
#include <TaoApiCpp/domain/Demographic.h>


/**
 * @brief TOP RESPONSE API: 获取定向投放人群维度列表
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class SimbaNonsearchAlldemographicsGetResponse : public TaoResponse
{
public:
 virtual ~SimbaNonsearchAlldemographicsGetResponse() { }

  QList<Demographic> getDemographicList() const;
  void setDemographicList (QList<Demographic> demographicList);
  virtual void parseNormalResponse();

 private:
/**
 * @brief 定向投放人群维度列表
 **/
  QList<Demographic> demographicList;

};

#endif
