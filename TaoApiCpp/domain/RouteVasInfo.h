#ifndef ROUTEVASINFO_H
#define ROUTEVASINFO_H

#include <TaoApiCpp/TaoDomain.h>
#include <QList>
#include <QString>
#include <TaoApiCpp/domain/LogisticsVas.h>


/**
 * @brief 线路的增值服务信息
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class RouteVasInfo : public TaoDomain
{

public:
 virtual ~RouteVasInfo() { }

  QString getRouteCode() const;
  void setRouteCode (QString routeCode);
  QList<LogisticsVas> getVasList() const;
  void setVasList (QList<LogisticsVas> vasList);
  
  virtual void parseResponse();

private:
/**
 * @brief 线路code标志
 **/
  QString routeCode;

/**
 * @brief 增值服务列表
 **/
  QList<LogisticsVas> vasList;

};

#endif  /* ROUTEVASINFO_H */
