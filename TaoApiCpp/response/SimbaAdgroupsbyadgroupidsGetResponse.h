#ifndef SIMBAADGROUPSBYADGROUPIDSGETRESPONSE_H
#define SIMBAADGROUPSBYADGROUPIDSGETRESPONSE_H

#include <TaoApiCpp/TaoResponse.h>
#include <TaoApiCpp/domain/ADGroupPage.h>


/**
 * @brief TOP RESPONSE API: 批量得到推广组
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class SimbaAdgroupsbyadgroupidsGetResponse : public TaoResponse
{
public:
 virtual ~SimbaAdgroupsbyadgroupidsGetResponse() { }

  ADGroupPage getAdgroups() const;
  void setAdgroups (ADGroupPage adgroups);
  virtual void parseNormalResponse();

 private:
/**
 * @brief 返回的推广组分页对象
 **/
  ADGroupPage adgroups;

};

#endif
