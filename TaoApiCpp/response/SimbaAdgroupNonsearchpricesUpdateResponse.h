#ifndef SIMBAADGROUPNONSEARCHPRICESUPDATERESPONSE_H
#define SIMBAADGROUPNONSEARCHPRICESUPDATERESPONSE_H

#include <TaoApiCpp/TaoResponse.h>
#include <QList>
#include <TaoApiCpp/domain/ADGroup.h>


/**
 * @brief TOP RESPONSE API: 修改通投出价
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class SimbaAdgroupNonsearchpricesUpdateResponse : public TaoResponse
{
public:
 virtual ~SimbaAdgroupNonsearchpricesUpdateResponse() { }

  QList<ADGroup> getAdgroupList() const;
  void setAdgroupList (QList<ADGroup> adgroupList);
  virtual void parseNormalResponse();

 private:
/**
 * @brief 推广组列表
 **/
  QList<ADGroup> adgroupList;

};

#endif
