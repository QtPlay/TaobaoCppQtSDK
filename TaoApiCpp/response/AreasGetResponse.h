#ifndef AREASGETRESPONSE_H
#define AREASGETRESPONSE_H

#include <TaoApiCpp/TaoResponse.h>
#include <QList>
#include <TaoApiCpp/domain/Area.h>


/**
 * @brief TOP RESPONSE API: 查询标准地址区域代码信息 参考：http://www.stats.gov.cn/tjbz/xzqhdm/t20100623_402652267.htm
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class AreasGetResponse : public TaoResponse
{
public:
 virtual ~AreasGetResponse() { }

  QList<Area> getAreas() const;
  void setAreas (QList<Area> areas);
  virtual void parseNormalResponse();

 private:
/**
 * @brief 地址区域信息列表.返回的Area包含的具体信息为入参fields请求的字段信息.
 **/
  QList<Area> areas;

};

#endif
